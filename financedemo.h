#ifndef FINANCEDEMO_H
#define FINANCEDEMO_H

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <iostream>
#include <QTimer>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>                                                              
#include <time.h>  
#include <string.h>
#include <QApplication>
#include <QDateEdit>
#include <QScrollBar>
#include <QDateTime>
#include <vector>
#include <sstream>
#include <algorithm>
#include <QHBoxLayout>
#include <QObjectList>
#include <QDateTime>
#include <mysql++.h>
#include <typeinfo>


#include "qchartviewer.h"
#include "chartdir.h" 

class FinanceDemo : public QDialog
{
    Q_OBJECT
public:
    FinanceDemo(QWidget *parent = 0);
    ~FinanceDemo();

private:
    // TimeStamps, volume, high, low, open and close data
    QString m_tickerKey;
    double *date;
    double *open;
    double *high;
    double *low;
    double *close;
    double *volume;    
    int data_len;       

    // An extra data series to compare with the close data
    QString m_compareKey;
    double *m_compareData;
    int m_compareDataLen;

    // The resolution of the data in seconds. 1 day = 86400 seconds.
    int m_duration;

    // The moving average periods
    int m_avgPeriod1;
    int m_avgPeriod2;

   
    // The user interface
    QLineEdit *m_TickerSymbol;
    QLineEdit *m_CompareWith;
    QComboBox *m_TimeRange;
    QComboBox *m_ChartSize;
    QCheckBox *m_VolumeBars;
    QCheckBox *m_ParabolicSAR;
    QCheckBox *m_LogScale;
    QCheckBox *m_PercentageScale;
    QComboBox *m_ChartType;
    QComboBox *m_PriceBand;
    QComboBox *m_AvgType1;
    QComboBox *m_AvgType2;
    QLineEdit *m_MovAvg1;
    QLineEdit *m_MovAvg2;
    QComboBox *m_Indicator1;
    QComboBox *m_Indicator2;
    QComboBox *m_Indicator3;
    QComboBox *m_Indicator4;
    QChartViewer *m_ChartViewer;
    QScrollBar *m_HScrollBar;
    QDateEdit *m_StartDate;
    QDateEdit *m_EndDate;

    void drawChart(QChartViewer *viewer);            // Draw chart
	void financedemo(MultiChart *m, int mouseX);    // Draw Track Cursor
	void initChartViewer(QChartViewer *viewer);     // Initialize the QChartViewer
	void read_data(int durationOfStock);
    void read_data_compare(int durationOfStock);
	void updateControls(QChartViewer *viewer);      // Update other controls
	void updateImageMap(QChartViewer *viewer);      // Update the image map	

private slots:
    void onComboBoxChanged(int);
    void onCheckBoxChanged();
    void onLineEditChanged();
    void onMouseUsageChanged(int mouseUsage);
	void onViewPortChanged();	
	void onMouseMovePlotArea(QMouseEvent *event);
	void onHScrollBarChanged(int value);
	void onMouseWheelChart(QWheelEvent *event);
};

#endif // FINANCEDEMO_H
